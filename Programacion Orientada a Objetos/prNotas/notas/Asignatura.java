package notas;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.InputMismatchException;
import java.util.Locale;
import java.util.NoSuchElementException;
import java.util.Scanner;
import java.util.Set;


public class Asignatura {
	/**
	 * Variable que representa el nombre de la asignatura
	 */
	private String nombre;
	
	/**
	 * Lista para almacenar los alumnos que se leen correctamente
	 */
	private ArrayList<Alumno> alumnos;
	
	/**
	 * Lista para almacenar las entradas incorrectas, precedidas por un comentario que
	 * explique el problema de formato detectado
	 */
	private ArrayList<String> errores;
	
	/**
	 * Constructor para crear una asignatura a partir de un nombre y un array de cadenas de caracteres, 
	 * donde cada elemento es de la forma: 
	 * 	DNI;Nombre;Calificación
	 * @param n		Nombre de la asignatura
	 * @param als	Array de String con información sobre los alumnos de una asignatura
	 */
	public Asignatura(String n, String[] als) {
		nombre = n;
		procesarAlumnos(als);
	}

	private void procesarAlumnos(String[] als) {
		// Se inicializan las listas para almacenar los alumnos leídos correctamente
		// y los errores detectados.
		alumnos = new ArrayList<>();
		errores = new ArrayList<>();
		// Se recorre el array als de información sobre los alumnos
		for(String al : als) { 
			try(Scanner sc = new Scanner(al)) {
				// Se define un scanner sobre la cadena de caracteres que 
				// tiene la información sobre el alumno: al
				// Se considera el delimitador ";"
				sc.useDelimiter("[;]");
				// Leemos dos String y un double
				String dni = sc.next();
				String nom = sc.next();
				// nextDouble lee números con la coma decimal. 
				// Para leer el punto decimal, enviamos a sc el mensaje:
				sc.useLocale(Locale.ENGLISH);
				double cal = sc.nextDouble();
				// Con la información obtenida creamos un Alumno y lo almacenamos entre los correctos
				alumnos.add(new Alumno(dni, nom, cal));
				// Incrementamos el número de correctos leídos.
			} catch (InputMismatchException imee) { // Se produce un error de formato: se esperaba un double
				errores.add("ERROR. Calificacion no numerica: " + al);
			} catch (NoSuchElementException nseee) { // Se produce un error de formato: se intenta leer un dato que no existe
				errores.add("ERROR. Faltan datos: " + al);
			} catch (AlumnoException ae) { // Se producirá en caso de que la calificación fuese negativa
				errores.add("ERROR. Calificacion negativa: " + al);
			}
		}
	}

	/**
	 * Mwtodo para obtener el array de alumnos
	 * @return El array de alumnos
	 */
	public ArrayList<Alumno> getAlumnos() {
		return alumnos;
	}
	
	/**
	 * Método para obtener el array de errores
	 * @return	El array de errores
	 */
	public ArrayList<String> getErrores() {
		return errores;
	}
	
	/**
	 * Método para obtener la calificación de un alumno determinado
	 * @param al Alumno
	 * @return	Calificación del alumno en el array alumnos
	 * @throws AlumnoException 
	 */
	public double getCalificacion(Alumno al) throws AlumnoException {
		int res = alumnos.indexOf(al);
		if (res == -1) // Si no se encuentra el alumno, se lanza una excepción con mensaje.
			throw new AlumnoException ("El alumno " + al + " no se encuentra");
		return alumnos.get(res).getCalificacion() ;
	}
	
	/** 
	 * Devuelve la media aritmética de todos los alumnos
	 * @return	Nota media de los alumnos
	 * @throws AlumnoException 
	 */
	public double getMedia() throws AlumnoException {
		if (alumnos.size() == 0) 
			throw new AlumnoException("No hay alumnos");
		double suma = 0;
		for (Alumno alumno : alumnos) {
				suma += alumno.getCalificacion();
		}
		return suma/alumnos.size();
	}
	
	public String toString() {
		StringBuilder res = new StringBuilder(nombre + ": { ");
		res.append(alumnos);
		res.append(", ");
		res.append(errores);
		res.append(" }");
		return res.toString();
	}
}
