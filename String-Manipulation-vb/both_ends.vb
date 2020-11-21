Module Module1

    Sub Main()
        Dim s As String = ""

        Console.Write("Input a string: ")
        s = Console.ReadLine()
        If Len(s) > 4 Then
            Console.WriteLine("The output string is: " & Left(s, 2) & Right(s, 2))
        Else
            Console.WriteLine("The output string is: " & s)
        End If
        Console.ReadKey()
    End Sub

End Module
