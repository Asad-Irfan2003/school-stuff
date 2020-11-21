Module Module1

    Sub Main()
        Dim s As String = ""
        Dim char1 As Char = ""
        Dim char2 As Char = ""
        Dim mystring As String = ""
        Dim x As Integer = 0
        Dim mychar As Char = ""
        Console.Write("Input a string: ")
        s = Console.ReadLine()
        Console.Write("Enter the character you want to replace: ")
        char1 = Console.ReadLine()
        Console.Write("Enter the character you want to replace with: ")
        char2 = Console.ReadLine()

        For x = 1 To Len(s)
            mychar = Mid(s, x, 1)
            If LCase(mychar) = LCase(char1) Then
                mychar = char2

            End If
            mystring = mystring + mychar

        Next
        Console.WriteLine("The output string: " & mystring)
        Console.ReadKey()
    End Sub

End Module
