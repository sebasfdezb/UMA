package cuentapalabras;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintWriter;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.StringJoiner;

public class ContadorPalabras {
	private ArrayList <PalabraEnTexto> palabras;
	
	public ContadorPalabras() {
		this.palabras= new Arraylist<>();
	}
	
	private int esta(String pal) {
		int res=-1;
		boolean encontrado=false; 
		PalabraEnTexto aux= new PalabraEnTexto(pal);
		Iterator <PalabraEnTexto> it = palabras.iterator();
		while(it.hasNext() && !encontrado) {
			if(it.equals(aux)) {
				encontrado=true;
				res=palabras.indexOf(aux);
			}
		}
		return res;
	}
	
	protected void incluye(String pal) {
		if(!pal.isBlank()) {
			int i=esta(pal);
			if(i!=-1) {
				PalabraEnTexto aux= palabras.get(i);
				aux.incrementa();
				palabras.set(i,  aux);
			}else {
				palabras.add(new PalabraEnTexto(pal));
			}
		}
	}
	
	public void incluyeTodas(String linea, String del) {
		try(Scanner sc = new Scanner(linea)){
			sc.useDelimiter(del);
			while(sc.hasNext()) {
				String pal= sc.next();
				incluye(pal);
				
			}
		}
	}
	
	public void incluyeTodas(String [] texto,  String del) {
		for(String linea : texto) {
			incluyeTodas(linea, del);
		}
	}
	
	public void incluyeTodasFichero(String nomFich, String del) throws IOException {
		List<String> lineas = Files.readAllLines(Path.of(nomFich));
		for(String x : lineas) {
			incluyeTodas(x, del);
		}
	}
	
	public PalabraEnTexto encuentra(String pal) {
		int pos = esta(pal);
		PalabraEnTexto sol=null;
		if(pos !=-1) {
			sol=palabras.get(pos);
			}else {
				throw new NoSuchElementException();
			}
		return sol;
	}
	
	@Override
	
	public String toString() {
		StringJoiner sj= new StringJoiner(" - ", "[", "]");
		for(PalabraEnTexto p: palabras) {
			sj.add(p.toString()); 
		}
		return sj.toString();
	}
	
	public void presentaPalabras(String fichero) throws FileNotFoundException{
		try(PrintWriter pw= new PrintWriter(fichero)){
			presentaPalabras(pw);
		}
	}
	
	public void presentaPalabras(PrintWriter pw) {
		for(PalabraEnTexto p : palabras) {
			pw.println(p);
		}
	}
	
	
	
	

}
