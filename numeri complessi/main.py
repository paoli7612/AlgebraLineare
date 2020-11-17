import pygame, time
SIZE = WIDTH, HEIGHT = 800, 800
M = 10
class Window:
    def __init__(self):
        self.screen = pygame.display.set_mode(SIZE)
        self.center = self.x, self.y = 400, 400
        self.screen.fill((200, 200, 200))
        pygame.draw.line(self.screen, (0,0,0), (self.x, M), (self.x, HEIGHT-M))
        pygame.draw.line(self.screen, (0,0,0), (M, self.y), (WIDTH-M, self.y))
        pygame.display.flip()

    def point(self, x, y):
        return x*20+self.x, self.y-y*20

    def draw(self, *cc):
        for c in cc:
            pygame.draw.line(self.screen, (50, 50, 50), (self.center), self.point(*c.get()))
        pygame.display.flip()

class Complesso:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def get(self):
        return self.a, self.b

    def coniugato(self):
        return self.a, -self.b


if __name__ == '__main__':
    w = Window()
    c = Complesso(3, 4)
    c2 = Complesso(6, 2)
    w.draw(c, c2)
    time.sleep(2)
