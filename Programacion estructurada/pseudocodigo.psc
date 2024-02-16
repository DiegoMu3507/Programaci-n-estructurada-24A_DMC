Algoritmo pseudocodigos 
	Definir x como entero
	Definir i como entero
	Definir z como entero
	definir contador como entero
	Repetir 
	Escribir "Dime un numero"
	Leer x
	Si x>0 y x<500 Entonces
		
		contador <- 0 
		Mientras contador <100 Hacer
			x<- x+5
			escribir x
			contador <- contador + 1
		Fin Mientras
	Sino Si   x>500 y x<1000 Entonces
			Mientras contador <50 Hacer
				x<- x+10
				escribir x
				contador <- contador + 1
			Fin Mientras
		SiNo Si x>1000 Entonces
				escribir "No se puede calcular el valor"
			Fin Si
		Fin si			
	Fin Si 
	escribir "Quieres repetir si [1] no [2]"
	leer i
Hasta Que i= 2
FinAlgoritmo

