import java.util.ArrayList;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
 
public class array_saving{
    public static void main(String[] args)
        throws FileNotFoundException
    {
        // Creating an instance of file
        File path
            = new File("text.txt");
        
        ArrayList<String> geekcourses
            = new ArrayList<String>();
        geekcourses.add("Data Structures");
        geekcourses.add("Algorithms");
        geekcourses.add("Operating System");
        geekcourses.add("Computer Networks");
        geekcourses.add("Machine Learning");
        geekcourses.add("Databases");
        
        String commaseparatedlist = geekcourses.toString();
        commaseparatedlist
            = commaseparatedlist.replace("[", "")
                  .replace("]", "")
                  .replace(" ", "");
        
        
        // Declaring the print writer with path
        PrintWriter pw = new PrintWriter(path);
        
        // Now calling writer() method with string
        pw.write(
            commaseparatedlist);
 
        // Flushing the print writer
        pw.flush();
 
        // Lastly closing the printwriter
        // using the close() method
        pw.close();
    }
}
