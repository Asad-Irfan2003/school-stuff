Module Module1

    Sub Main()


        Dim s As String = ""
        Dim fchar As Char = ""
        Dim mychar As Char = ""
        Dim mystring As String = ""
        Dim x As Integer = 0

        Console.Write("Input a string: ")
        s = Console.ReadLine()
        fchar = Mid(s, 1, 1)

        For x = 2 To Len(s)
            mychar = Mid(s, x, 1)
            If LCase(fchar) = LCase(mychar) Then
                mychar = "*"
            End If
            mystring = mystring + mychar

        Next
        Console.WriteLine("The output string is: " & fchar & mystring)

        Console.ReadKey()
    End Sub

End Module
