import pygame, time
SIZE = WIDTH, HEIGHT = 800, 800
M = 10
class Window:
    def __init__(self):
        self.screen = pygame.display.set_mode(SIZE)
        self.x, self.y = 400, 400
        self.screen.fill((200, 200, 200))
        pygame.draw.line(self.screen, (0,0,0), (self.x, M), (self.x, HEIGHT-M))
        pygame.draw.line(self.screen, (0,0,0), (M, self.y), (WIDTH-M, self.y))
        pygame.display.flip()

    def draw(c): # Complesso
        pygame.draw.line()

class Complesso:
    def __init__(self, a, b):
        self.a = a
        self.b = b


if __name__ == '__main__':
    w = Window()
    c = Complesso(3, 4)
    time.sleep(2)
