package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        // a. Create an instance of Veena and call play()
        Veena veena = new Veena();
        veena.play();

        // b. Create an instance of Saxophone and call play()
        Saxophone saxophone = new Saxophone();
        saxophone.play();

        // c. Place the above instances in a variable of type Playable and then call play()
        Playable playable;

        playable = veena;
        playable.play();

        playable = saxophone;
        playable.play();
    }
}
