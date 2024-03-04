package cuentapalabras;

public class PalabraEnTexto {
	private String palabra;
	private int veces;
	
	public PalabraEnTexto(String palabra) {
		 this.palabra=palabra.toUpperCase();
		 veces=1;
	}
	
	@Override
	public boolean equals(Object o) {
		boolean res=false;
		if(o instanceof PalabraEnTexto) {
			PalabraEnTexto p= (PalabraEnTexto) o;
			res = this.palabra.equalsIgnoreCase(p.palabra);
		}
		return res;
	}
	
	public int hashCode() {
		return palabra.hashCode();
	}
	
	public String toString() {
		return palabra + ": " + veces;
	}
	
	public void incrementa() {
		veces++;
	}

}
