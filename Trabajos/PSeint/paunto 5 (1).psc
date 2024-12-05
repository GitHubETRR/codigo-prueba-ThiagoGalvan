Algoritmo punto_4_y_5
	Escribir 'En este programa va a poder calcular el valor resistivo y, capacitivo o inductivo segun corresponda a su circuito'
	Escribir 'Seleccione que va a ingresar'
	Escribir '(1) - Impedancia'
	Escribir '(2) - Tension y corriente, forma polar'
	Leer val
	Si val=2 Entonces
		Escribir 'Porfavor, ingrese la frecuencia de trabajo'
		Leer frecuencia
		Escribir 'Ingrese el módulo de su tensión'
		Leer mod_v
		Escribir 'Ingrese el ángulo de su tensión'
		Leer ang_v
		Escribir 'Ingrese el módulo de su corriente'
		Leer mod_a
		Escribir 'Ingrese el ángulo de su corriente'
		Leer ang_a
		mod_z <- producto_mod_z(mod_v,mod_a)
		ang_z <- producto_ang_z(ang_v,ang_a)
		real_z <- polar_binomica_real(mod_z,ang_z)
		imag_z <- polar_binomica_imag(mod_z,ang_z)
		cap_induct(real_z,imag_z,frecuencia)
	SiNo
		Escribir 'Porfavor, ingrese la frecuencia de trabajo'
		Leer frecuencia
		Escribir 'Ingrese el valor real de impedancia'
		Leer real_z
		Escribir 'Ahora el valor imaginario'
		Leer imag_z
		cap_induct(real_z,imag_z,frecuencia)
	FinSi
FinAlgoritmo

Funcion mod_z = producto_mod_z(mod_v,mod_a)
	mod_z <- mod_v/mod_a
FinFuncion

Funcion cap_induct (real_z,imag_z,frecuencia)
	Si imag_z>0 Entonces
		induc <- imag_z/(2*pi*frecuencia)
		Escribir 'Tu resitencia es de ',real_z,' ohms y la inductancia es ',induc,' henries'
	SiNo
		cap <- -1/(imag_z*2*pi*frecuencia)
		Escribir 'Tu resistencia es de ',real_z,' ohms y tu capacitancia es de ',cap,' faradios'
	FinSi
FinFuncion

Funcion ang_z = producto_ang_z(ang_v,ang_a)
	ang_z <- ang_v-ang_a
FinFuncion

Funcion real_z = polar_binomica_real(mod_z,ang_z)
	argumento <- ang_z*pi/180
	real_z <- cos(argumento)*mod_z
FinFuncion

Funcion imag_z = polar_binomica_imag(mod_z,ang_z)
	argumento <- ang_z*(pi/180)
	imag_z <- sen(argumento)*mod_z
FinFuncion
