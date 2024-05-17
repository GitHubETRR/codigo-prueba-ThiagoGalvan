Algoritmo conversiones
	Repetir
		Escribir 'Eliga un programa para ejecutar'
		Escribir '(1) - Binomica a Polar (x+Jb)'
		Escribir '(2) - Polar a Binomica'
		Escribir '(3) - Suma de numeros complejos'
		Escribir '(4) - Salir'
		Leer programa
		Segun programa  Hacer
			1:
				Escribir 'De acuerdo, porfavor ingrese el valor X(real) de su número complejo'
				Leer x
				Escribir 'Ahora porfavor ingrese el valor J(imaginario) de su número complejo'
				Leer b
				Bin_Pol(x,b)
			2:
				Escribir 'De acuerdo, porfavor ingrese el valor del angulo'
				Leer angulo
				Escribir 'Ahora porfavor ingrese el valor del modulo'
				Leer modulo
				Pol_Bin(angulo,modulo)
			3:
				Escribir 'Porfavor ingrese el valor real de su primer numero complejo'
				Leer R1
				Escribir 'Ingrese el valor imaginario de su primer numero complejo'
				Leer I1
				Escribir 'Porfavor ingrese el valor real de su segundo numero complejo'
				Leer R2
				Escribir 'Ingrese el valor imaginario de su segundo numero complejo'
				Leer I2
				x <- R1+R2
				b <- I1+I2
				Escribir 'Si quiere convertir el resultado a polar ingrese un 1, de lo contrario ingrese un 2'
				Leer convertir
				Si convertir=1 Entonces
					Bin_Pol(x,b)
				SiNo
					Escribir 'La suma de los dos numeros complejos da como resultado: ',x,' + J',b
				FinSi
			4:
				programa = 4
			De Otro Modo:
				Escribir 'Opcion no valida, eliga nuevamente'
		FinSegun
	Mientras Que programa<>4
FinAlgoritmo

Funcion Bin_Pol(x,b)
	Si (x=0) O (b=0) Entonces
		Si b=0 Entonces
			Si b>0 Entonces
				ang <- 0
			SiNo
				ang <- 180
			FinSi
		SiNo
			Si b>0 Entonces
				ang <- 90
			SiNo
				ang <- 270
			FinSi
		FinSi
	SiNo
		Si (b>0) Y (x>0) Entonces
			alpha <- 0
			ang <- alpha+atan(b/x)*(180/PI)
		SiNo
			Si (b<0) Y (x>0) Entonces
				alpha <- 270
				ang <- alpha+atan(x/(b*(-1)))*(180/PI)
			SiNo
				Si (b>0) Y (x<0) Entonces
					alpha <- 90
					ang <- alpha+atan((x*(-1)/b))*(180/PI)
				SiNo
					alpha <- 180
					ang <- alpha+atan(b*(-1)/(x*(-1)))*(180/PI)
				FinSi
			FinSi
		FinSi
	FinSi
	m <- Rc(x*x+b*b)
	Escribir 'Su forma polar seria ',m,'*e^j',ang
FinFuncion

Funcion Pol_Bin(angulo,modulo)
	argumento <- angulo*PI/180
	reals <- cos(argumento)*modulo
	imaginario <- sen(argumento)*modulo
	Escribir 'La forma binómica es (',reals,'; j',imaginario,')'
FinFuncion
