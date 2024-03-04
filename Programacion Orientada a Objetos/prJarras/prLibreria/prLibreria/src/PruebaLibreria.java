import libreria.Libreria;

public class PruebaLibreria {
	public static void main(String[] args) {
		Libreria milibreria= new Libreria();
		milibreria.addLibro("George Orwell", "1984", 8.20);
		milibreria.addLibro("Philip K. Dick", "¿Sueñan los androides con ovejas eléctricas?", 3.50);
		milibreria.addLibro("Isaac Asimov", "Fundación e Imperio", 9.40);
		milibreria.addLibro("Ray Bradbury", "Fahrenheit 451", 7.40);
		milibreria.addLibro("Aldous Huxley", "Un Mundo Feliz", 6.50);
		milibreria.addLibro("Isaac Asimov", "La Fundación", 7.30);
		milibreria.addLibro("William Gibson", "Neuromante", 8.30);
		milibreria.addLibro("Isaac Asimov", "Segunda Fundación", 8.10);
		milibreria.addLibro("Isaac Newton", "arithmetica universalis", 7.50);
		System.out.println(milibreria);
		
		milibreria.remLibro("George Orwell", "1984");
		milibreria.remLibro("Aldous Huxley", "Un Mundo Feliz");
		milibreria.remLibro("Isaac Newton", "Arithmetica Universalis");
		System.out.println("/n"+milibreria+"/n");
		
		System.out.println("PrecioFinal(Phillip K.Dick, ¿Suenan los androides con ovejas electricas?):"+milibreria.getPrecioFinal("Phillip K.Dick" , "¿Suenan los androides con ovejas electricas?"));
		System.out.println("PrecioFinal(isaac asimov, fundacion e imperio):"+milibreria.getPrecioFinal("isaac asimov", "fundacion e imperio"));
		System.out.println("PrecioFinal(Ray Bradbury, Fahrenheit 451):"+milibreria.getPrecioFinal("Ray Bradbury", "Fahrenheit 451"));
		System.out.println("PrecioFinal(isaac asimov, La Fundacion):"+milibreria.getPrecioFinal("isaac asimov", "La Fundacion"));
		System.out.println("PrecioFinal(william gibson, neuromante):"+milibreria.getPrecioFinal("william gibson", "neuromante"));		
		System.out.println("PrecioFinal(isaac asimov, Segunda Fundacion):"+milibreria.getPrecioFinal("isaac asimov", "Segunda Fundacion"));
		System.out.println("PrecioFinal(isaac newton, Arithmetica Universalis):"+milibreria.getPrecioFinal("isaac newton", "Arithmetica Universalis"));
		

	}

}
