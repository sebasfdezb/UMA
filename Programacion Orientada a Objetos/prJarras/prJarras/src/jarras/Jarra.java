package jarras;

public class Jarra {
	
	final private int capacidad;
	private int contenido;
	
	public Jarra (int capacidad) {
		if(capacidad <= 0)
			throw new RuntimeException ("La capacidad no puede");
		this.capacidad = capacidad;
		this.contenido = 0;
		
	}
	
	public int capacidad() {
		return capacidad;
	}
	
	public int contenido() {
		return contenido;
	}
	
	void llena() {
		contenido = capacidad;
	}
	
	void vacia() {
		contenido=0;
	}
	
	public void llenaDesde(Jarra j) {
		if(this==j)
			throw new RuntimeException("No se puede llenar una jarra de si misma");
		
		int trasvase = Math.min(this.capacidad - this.contenido, j.contenido);
		this.contenido +=trasvase;
		j.contenido -= trasvase;
	}
	
	@Override
	public String toString() {
		return "J(" + capacidad + "," + contenido + ")";
	}
	
	
	

}
