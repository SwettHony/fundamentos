import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class competidor1 extends JFrame implements AdjustmentListener {

	private JScrollBar tom, jerry;
	private int tomValor = 0, jerryValor = 0;

	public competidor1() {
		setTitle("Competidor");
		setSize(300, 200);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLayout(new FlowLayout());

		JLabel toms = new JLabel("Tom:");
		add(toms);
		tom = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 100);
		add(tom);
		tom.addAdjustmentListener(this);

		JLabel jerrys = new JLabel("Jerry:");
		add(jerrys);
		jerry = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 100);
		add(jerry);
		jerry.addAdjustmentListener(this);
	}

	@Override
	public void paint(Graphics g) {
		super.paint(g);

		// Dibuja el tiro al blanco
		int centerX = 400, centerY = 100, radius = 50;
		g.setColor(Color.RED);
		g.fillOval(centerX - radius, centerY - radius, 2 * radius, 2 * radius);
		radius -= 10;
		g.setColor(Color.WHITE);
		g.fillOval(centerX - radius, centerY - radius, 2 * radius, 2 * radius);
		radius -= 10;
		g.setColor(Color.BLUE);
		g.fillOval(centerX - radius, centerY - radius, 2 * radius, 2 * radius);

		// Dibuja una casa con detalles
		g.setColor(Color.ORANGE);
		g.fillRect(100, 150, 100, 100); // cuerpo de la casa
		g.setColor(Color.RED);
		int[] xPoints = {100, 150, 200};
		int[] yPoints = {150, 100, 150};
		g.fillPolygon(xPoints, yPoints, 3); // techo
		g.setColor(Color.BLACK);
		g.fillRect(125, 200, 30, 50); // puerta
		g.setColor(Color.BLUE);
		g.fillRect(165, 180, 20, 20); // ventana

		// Dibuja una persona
		g.setColor(Color.BLACK);
		g.fillOval(50, 250, 30, 30); // cabeza
		g.drawLine(65, 280, 65, 330); // cuerpo
		g.drawLine(65, 300, 45, 290); // brazo izquierdo
		g.drawLine(65, 300, 85, 290); // brazo derecho
		g.drawLine(65, 330, 50, 360); // pierna izquierda
		g.drawLine(65, 330, 80, 360); // pierna derecha

		//texto de competidores
		g.drawString("Tom", 40, 100);
		g.fillRect(80, 90, tomValor, 10);
		g.drawString("Jerry", 40, 120);
		g.fillRect(80, 110, jerryValor, 10);
		if (tomValor > jerryValor)
			g.drawString("Tom es mayor", 50, 150);
		else
			g.drawString("Jerry es mayor", 50, 150);
	}

	@Override
	public void adjustmentValueChanged(AdjustmentEvent e) {
		if (e.getSource() == tom) {
			tomValor = tom.getValue();
		} else if (e.getSource() == jerry) {
			jerryValor = jerry.getValue();
		}
		repaint();
	}

	public static void main(String[] args) {
		SwingUtilities.invokeLater(() -> {
			competidor1 frame = new competidor1();
			frame.setVisible(true);
		});
	}
}