import java.awt.*;
import javax.swing.*;

public class bruh extends JFrame {

    private JButton boton;
    private JTextField campoTexto,campoTexto1,campoTexto2 ;
    private JLabel nombre,ocupacion,direccion; 

    public static void main(String[] args) {
        bruh marco = new bruh();
        marco.setSize(400, 300);
        marco.crearGUI();
        marco.setVisible(true);
    }

    private void crearGUI() {
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        Container ventana = getContentPane();
        ventana.setLayout(new FlowLayout() );

	boton = new JButton("Haga clic");
	ventana.add(boton);
	
    campoTexto = new JTextField(20 );        //constructor del compinente texfiel
    campoTexto1 = new JTextField( 30);
    campoTexto2 = new JTextField( 40);

    nombre = new JLabel("nombre:");
    ocupacion = new JLabel("ocupacion:");
    direccion = new JLabel("direccion:");
    
	
    ventana.add(nombre);
    ventana.add(campoTexto);                   //subirlo al contenedor 
    ventana.add(ocupacion);
    ventana.add(campoTexto1);
    ventana.add(direccion);
    ventana.add(campoTexto2);

    }
}