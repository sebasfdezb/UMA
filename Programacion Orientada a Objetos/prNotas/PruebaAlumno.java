import notas.Alumno;
import notas.AlumnoException;

public class PruebaAlumno {

	public static void main(String[] args) throws AlumnoException {
		Alumno alumno1 = new Alumno("22456784F", "Gonzalez Perez, Juan", 5.5);
		Alumno alumno2 = new Alumno("33456777S", "Gonzalez Perez, Juan", 3.4);

		System.out.println(alumno1.getNombre() + ": " +  alumno1.getCalificacion());
		System.out.println(alumno2.getNombre() + ": " +  alumno2.getCalificacion());
		
		System.out.println("Los alumnos " + (alumno1.equals(alumno2) ? "sí " : "no ") + "son iguales");
	}

}
