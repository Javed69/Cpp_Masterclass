public class TestRandomCharacter
{
    ///***Main method***///
    public static void main(String []args)
    {
        final int NUMBER_0F_CHARS =  175;
        final  int CHARS_PER_LINE = 25;

        //Print random character between 'a' and 'z' chars per line
        for(int i=0; i<NUMBER_0F_CHARS; i++)
        {
            char ch = RandomCharacter.getRandomLowerCaseLetter();
            if((i+1)%CHARS_PER_LINE == 0)
            System.out.println(ch);
            else
            System.out.println(ch);
        }
    }
}
