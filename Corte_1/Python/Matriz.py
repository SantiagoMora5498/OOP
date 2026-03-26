class Matriz:
    def __init__(self):
        self.m = [[0, 0], [0, 0]]

    def datos(self):
        self.m[0][0], self.m[0][1] = 7, 9
        self.m[1][0], self.m[1][1] = 2, 8

    def ver(self):
        for f in self.m:
            for c in f:
                print(c, end=" ")
            print()

    def suma(self):
        s = 0
        for f in self.m:
            for c in f:
                s += c
        return s

# Main
obj = Matriz()
obj.datos()
obj.ver()
print("Suma =", obj.suma())