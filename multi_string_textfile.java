import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
public class multi_string_textfile{
    public static void main(String[] args) {
        String var1 ="test1";
        String var2 ="test2";
        String var3 ="test3";
        try{
            BufferedWriter writer = new BufferedWriter(new FileWriter("test.txt"));
            writer.write(var1+","+var2+","+var3);
            writer.close();
        } catch(IOException e) {
            e.printStackTrace();
        }
    }
}

