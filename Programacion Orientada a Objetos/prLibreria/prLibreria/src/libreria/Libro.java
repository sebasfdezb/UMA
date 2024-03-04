package libreria;

public class Libro {
	private String nombre;
	private String titulo;
	private double precioBase;
	private static double porcIva=10.0;
	
	public Libro (String nombre, String titulo, double precio) {
		this.nombre=nombre;
		this.titulo=titulo;
		this.precioBase=precio;
	}
	
	public String getAutor() {
		return nombre;
	}
	
	public String getTitulo() {
		return titulo;
	}

	public double getPrecioBase() {
		return precioBase;
	}
	public double getPrecioFinal() {
		return precioBase+precioBase*porcIva/100;
	}
	@Override
	public String toString() {
		return "("+nombre+"; "+titulo+"; "+precioBase+"; "+porcIva+"%; "+getPrecioFinal()+")";
	}
	
	public static double getIVA() {
		return porcIva;
	}
	
	public static void setIVA(double porc) {
		porcIva=porc;
	}
}