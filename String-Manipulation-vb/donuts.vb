Module Module1

    Sub Main()
        Dim x As Integer = 0

        Console.Write("Enter number of donuts: ")
        x = Console.ReadLine()
        If x < 10 Then
            Console.WriteLine("Number of donuts: " & Str(x))
        Else
            Console.WriteLine("number of donuts: many")
        End If
        Console.ReadKey()
    End Sub

End Module
