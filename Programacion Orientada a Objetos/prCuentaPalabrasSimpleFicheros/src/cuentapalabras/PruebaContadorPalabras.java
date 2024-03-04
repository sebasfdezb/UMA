package cuentapalabras;

public class PruebaContadorPalabras {

	public static void main(String[] args) {
		ContadorPalabras c = new ContadorPalabras();
		String [] datos = {"Esta es la primera frase del ejemplo",
				"y esta es la segunda frase"};
		c.incluyeTodas(datos, "[ ]");
		System.out.println(c.toString());
	}

}
