package cuentapalabras;

public class PruebaPalabraEnTexto {

	public static void main(String[] args) {
		 PalabraEnTexto pl1 = new PalabraEnTexto("gorra");
		 PalabraEnTexto pl2 = new PalabraEnTexto("GORRA");
		 pl1.incrementa();
		 System.out.println("Palabra 1 = "+ pl1.toString() + "\n"+ "Palabra 2 = "+ pl2.toString());
		 
		 if(pl1.equals(pl2)) {
			 System.out.println("Son iguales");
		 }else {
			 System.out.println("No son iguales");

		 }
	}

}
