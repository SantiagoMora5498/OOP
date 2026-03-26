class Persona:
    def __init__(self):
        self.n = ""
        self.e = 0

    def saludar(self):
        print(f"Hola, soy {self.n} y tengo {self.e} años")

    def responder(self):
        print(f"Que tal, yo soy {self.n} y mi edad es {self.e}")

    def mostrar(self):
        print(f"Nombre = {self.n}\nEdad = {self.e}")

# Main
p1 = Persona()
p2 = Persona()

p2.n, p2.e = "Carlos", 19
p1.n, p1.e = "Elena", 23

print("--- Dialogo ---")
p1.saludar()
p2.responder()

print("\n--- Datos ---")
p1.mostrar()
p2.mostrar()