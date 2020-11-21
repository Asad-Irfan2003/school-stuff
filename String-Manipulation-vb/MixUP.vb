Module Module1

    Sub Main()
        Dim a As String = ""
        Dim b As String = ""
        Dim str1 As String = ""
        Dim str2 As String = ""

        Console.Write("Enter string a: ")
        a = Console.ReadLine()
        Console.Write("Enter string b: ")
        b = Console.ReadLine()

        str1 = Left(a, 2)
        str2 = Left(b, 2)
        b = str1 + Mid(b, 3, Len(b))
        a = str2 + Mid(a, 3, Len(a))
        Console.WriteLine("The output string is: " & a & " " & b)
        Console.ReadKey()

    End Sub

End Module
