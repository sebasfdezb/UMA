package notas; 

/**
 * Clase para representar alumnos. Aunque no se considera en el enunciado, se define un orden natural 
 * en la clase, por lo que se implementa la interfaz Comparable<Persona>
 * 
 * @author POO
 *
 */
public class Alumno implements Comparable<Alumno>{
	/** 
	 * Variables de instancia para almacenar el nombre, el dni y la calificación
	 */
	private String nombre;
	private String dni;
	private double calificacion;
	
	/**
	 * Constructor para crear alumnos. 
	 * Si la calificación es negativa se lanza una excepción AlumnoException.
	 * 
	 * @param n	Nombre del alumno
	 * @param d	DNI del alumno
	 * @param c	Calificación del alumno
	 * @throws AlumnoException 
	 */
	public Alumno(String d, String n, double c) throws AlumnoException {
		if (c < 0) throw new AlumnoException("La calificación no puede ser negativa");
		nombre = n;
		dni = d;
		calificacion = c;
	}
	
	/**
	 * Constructor para crear alumnos, a partir de un nombre y un dni. La calificación se considera 0.
	 * @param n
	 * @param d
	 * @throws AlumnoException 
	 */
	public Alumno(String d, String n) throws AlumnoException {
		this(d,n,0);
	}
	
	/**
	 * Método para consultar el nombre del alumno
	 * @return	El nombre del alumno
	 */
	public String getNombre() {
		return nombre;
	}
	
	/**
	 * Método para consultar el DNI del alumno
	 * @return	DNI del alumno
	 */
	public String getDni() {
		return dni;
	}
	
	/**
	 * Método para consultar la calificación del alumno
	 * @return	Calificación del alumno
	 */
	public double getCalificacion() {
		return calificacion;
	}
	
	/**
	 * Dos alumnos son iguales cuando tienen el mismo nombre y el mismo DNI, independientemente de
	 * mayúsculas y minúsculas.
	 */
	public boolean equals(Object obj) {
		boolean res = obj instanceof Alumno;
		Alumno al = res ? (Alumno) obj : null;
		return 	res &&
				nombre.equals(al.nombre) &&
				dni.equalsIgnoreCase(al.dni);
	}
	
	/**
	 * El método hashCode se redefine de forma adecuada, atendiendo a la redefinición de equals.
	 */
	public int hashCode() {
		return dni.toUpperCase().hashCode() + 
				nombre.hashCode();
	}
	
	/**
	 * Representación textual del alumno:
	 * 	Nombre DNI
	 */
	public String toString() {
		return nombre + " " + dni.toUpperCase();
	}
	
	/**
	 * Se define un criterio de ordenación (orden natural), por el que un alumno es menor que otro 
	 * si el nombre del primero es anterior al del segundo en orden lexicográfico, con independencia
	 * de mayúsculas o minúsculas. En caso de igualdad de nombre, se ordenarán por DNI.
	 */
	public int compareTo(Alumno al) {
		// Se comparan los nombres
		int comparacion = nombre.compareToIgnoreCase(al.nombre);
		// Si son iguales, se comparan los dni
		if (comparacion == 0) comparacion =  dni.compareToIgnoreCase(al.dni);
		// Se devuelve el resultado de la comparación
		return comparacion;
	}
}
