import java.util.ArrayList;
import java.util.Random;

interface Reader {
    void update(NumberGen n);
}

public abstract class NumberGen {
    private ArrayList<Reader> readers = new ArrayList<>();

    public void addReader(Reader r) {
        readers.add(r);
    }

    public void deleteReader(Reader r) {
        readers.remove(r);
    }

    public void notifyReaders() {
        for(int i=0; i<readers.size();i++){
            readers.
        }
    }

    abstract int getNumber();

    abstract void execute();
}

public class DigitReader implements Reader {
    public void update(NumberGen n) {
        n.getNumber();
    }
}

public class GraphReader implements Reader {
    public void update(NumberGen n) {
        n.getNumber();
    }
}

public class RandomNumberGen extends NumberGen {
    private Random random = new Random();
    private int num;

    public int getNumber(){
        return num;
    }

    for(

    int i = 0;i<5;i++)
    {
        num = (int) Math.random() % 20;
        super.notifyReaders();

    }
}