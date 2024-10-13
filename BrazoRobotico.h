#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico{
	private:
		double x, y, z;
		bool sujetando;
	
	public:
		BrazoRobotico(double x = 0.0, double y = 0.0, double z = 0.0, bool sujetando = false);

		double getX() const;
		double getY() const;
		double getZ() const;
		bool esta_sujetando() const;

		void coger();
		void soltar();
		void mover(double x1, double y1, double z1);
};

#endif
