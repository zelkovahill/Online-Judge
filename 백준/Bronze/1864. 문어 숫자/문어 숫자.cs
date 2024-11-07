
using (StreamReader sr = new StreamReader(Console.OpenStandardInput()))
{
    for (; ;)
    {
  
        string str = sr.ReadLine()!;
        
        if(str == "#")
            break;
        
        int result = 0;
        
        for(int i =0; i<str.Length; i++)
        {
            int value = str[i] switch
            {
                    '-' => 0,
                    '\\' => 1,
                    '(' => 2,
                    '@' => 3,
                    '?' => 4,
                    '>' => 5,
                    '&' => 6,
                    '%' => 7,
                    _ => -1      
            };
            
            result += value * (int)Math.Pow(8, str.Length - 1 - i);
        }
        Console.WriteLine(result);
                
    }
}