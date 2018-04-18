Algoritmo inicio
	Leer n
	Escribir 'Ingrese Edad'
	Leer n
	Si 0<n>60 Entonces
		Si n<3 Entonces
			Escribir 'bebe'
		SiNo
			Si 3<n<12 Entonces
				Escribir 'niño'
			SiNo
				Si 13<n<17 Entonces
					Escribir 'adolescente'
				SiNo
					Si 18<n<39 Entonces
						Escribir 'joven'
					SiNo
						Si 39<n<59 Entonces
							Escribir 'Adulto'
						SiNo
							Si 59<n Entonces
								Escribir 'adulto mayor'
							SiNo
								Escribir 'error de edad'
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	SiNo
		Escribir 'Edad incorrecta'
	FinSi
FinAlgoritmo

