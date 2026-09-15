# Testes de programação de Comp Cientifica #

## 0
# print("Hello, World!")

## 1
# a = 5
# b = 6.7
# c = "Ola mundo"
# boolean = True #False
# nulo = None
# print(a + c)

# ## 2
# lista_ruim = [1, "oir", None, True, ["as",False]]
# lista = [1,2,3,4,5,6,7,8]
# tamanho = len(lista)
# elemento = lista[1]
# lista.append(912)
# print(lista)

# ## 3 - Dictionary/hash
# dicionario = {"a":1, "b":2}
# print(dicionario["b"])

# ## 4 Estrutura de Controle
# idade = 20
# if (idade >= 18):
#     print("Adulto")
# elif (idade >= 60):
#     print("Idoso")
# else:
#     print("Crianca")

# ## 5 Estrutura de Controle WHILE

# i = 0
# while i < 10:
#     print(i)
#     i+=1

# lista = [4,5,6,7,8,10]
# for item in lista:
#     print(item + 2)

# dicionario = {"a":1,"b":2,"c":3}
# for chave, valor in dicionario.items():
#     print(chave + " - " + str(valor))

# ## 6 - Funcoes
# def fahrenheit(temperatura):
#     return (temperatura - 32) * 5 / 9

# temp_cels = fahrenheit(90)

# print(temp_cels)

# ## 7 - Objetos
# class Pessoa:
#     def __init__(self,nome):
#         self.nome = nome
#     def setIdade(self,idade):
#         self.idade = idade
#     def getIdade(self):
#         return self.idade
#     def __str__(self):
#         return "Nome: " + self.nome + ", idade: " + str(self.idade)

# p = Pessoa("Pedro")
# p.setIdade(20)

# ## 8 - Ler e Escrever em Arquivos

# arquivo = open("arquivo.txt","a")
# arquivo.write("Eita, Mundo!\n")
# arquivo.close()

# outro = open("arquivo.txt","r")
# for linha in outro:
#     print("Linha:" + linha)
# outro.close()

## 9 - Modulos
# import conversor
# c = conversor.fahrenheit(90)
# print(c)

from conversor import fahrenheit
c = fahrenheit(90)
print(c)