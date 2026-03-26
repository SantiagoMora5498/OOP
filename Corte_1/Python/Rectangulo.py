class Rect:
    def __init__(self):
        self.l = 0.0
        self.a = 0.0

    def set_dim(self, l, a):
        self.l = l
        self.a = a

    def area(self):
        return self.l * self.a

    def peri(self):
        return 2 * (self.l + self.a)

# Main
r = Rect()
r.set_dim(15.5, 8.2)
print(f"Area: {r.area()}")
print(f"Perimetro: {r.peri()}")