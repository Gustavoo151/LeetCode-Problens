def contDinheiro(montante):
    cedulas = [100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.50, 0.25, 0.10, 0.05, 0.01]
    valor = 0
    contNotas = 0
    aux = 0

    while(montante > 0 and valor < 12):
        if(cedulas[valor] < montante):
            aux = montante % cedulas[valor]
            contNotas = (montante - aux) / cedulas[valor]
            montante = aux

        elif(valor <= 5):
            print("{:.0f} nota(s) de R$ {:.2f}".format(contNotas, cedulas[valor]))
            valor += 1
            contNotas = 0
        else:
            print("{:.0f} moeda(s) de R$ {:.2f}".format(contNotas, cedulas[valor]))
            valor += 1
            contNotas = 0
            
contDinheiro(4)


