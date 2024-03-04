package libreria;

import java.util.ArrayList;

public class Libreria {
	private ArrayList<Libro> libs;
	
	public Libreria() {
		libs= new ArrayList<Libro>();
	}
	
	public void addLibro (String nombre, String titulo, double precio) {
		Libro aux = new Libro(nombre, titulo, precio);
		anadirLibro(aux);
	}
	
	public void remLibro(String autor, String titulo) {
		if(buscarLibro(autor, titulo)==-1) {
			throw new RuntimeException("Libro no encontrado ("+autor+", "+titulo+")");
		}else {
			libs.remove(buscarLibro(autor, titulo));
		}
	}
	
	public double getPrecioFinal(String autor, String titulo) {
		if(buscarLibro(autor, titulo)==-1){
			throw new RuntimeException("Libro no encontrado ("+autor+", "+titulo+")");
		}else {
			return libs.get(buscarLibro(autor, titulo)).getPrecioFinal();
		}
	}
	
	private void anadirLibro(Libro aux) {
		int control= buscarLibro(aux.getAutor(), aux.getTitulo());
		if (control!=-1) {
			libs.set(control, aux);
		}else {
			libs.add(aux);
		}
	}
	
	private int buscarLibro(String autor, String titulo) {
		int pos=-1;
		for(int i=0; i<libs.size() && pos==-1; i++) {
			if (autor.equalsIgnoreCase(libs.get(i).getAutor()) && titulo.equalsIgnoreCase(libs.get(i).getTitulo())) {
				pos=i;
			}
		}
		return pos;
	}
	
	@Override
	public String toString() {
		String cadena= "[";
		for(int j=0; j<libs.size(); j++) {
			if(j==libs.size()-1) {
				cadena+=libs.get(j);
			}else {
				cadena=cadena+libs.get(j)+","+"\n";
			}
		}
		cadena+="[";
		return cadena;
	}
}