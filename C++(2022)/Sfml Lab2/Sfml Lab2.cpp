#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 1020), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);


    bool render = false;
    sf::Texture texture;
    texture.loadFromFile("popo.png");


    class MySprite {     
    public:             
        sf::Texture texture;
        sf::Sprite sprite;
        
    };

    MySprite mySprite[2];

    for (int i = 0; i <= 1; i++) {
        mySprite[i].texture.loadFromFile("popo.png");
        mySprite[i].sprite.setScale(0.3, 0.3);
    }


    while (window.isOpen())
    {
        sf::Event event;
  
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

         if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            // Right key is pressed: move our character
             for (int i = 0; i <= 1; i++) {
                 mySprite[i].sprite.move(-1.f, 0.f);
             }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            for (int i = 0; i <= 1; i++) {
                mySprite[i].sprite.move(1.f, 0.f);
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            if (render != true) {
                render = true;
            }
            else {
                render = false;
            }
        }

        window.clear();
        if (render) { 
            for (int i = 0; i <= 1; i++) {
                window.draw(mySprite[i].sprite);
                printf("drawing..");
            }
        }
        window.display();
        printf("%d \n", render);
    }

    return 0;
}