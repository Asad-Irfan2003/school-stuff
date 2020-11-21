Module Module1

    Sub Main()
        Dim s As String = ""
        Dim mychar As Char = ""
        Dim strcounter As Integer = 0
        Dim x As Integer = 0

        Console.Write("Input a string: ")
        s = Console.ReadLine()
        Console.Write("Enter a character you want to count: ")
        mychar = Console.ReadLine()
        For x = 1 To Len(s)
            If mychar = LCase(Mid(s, x, 1)) Then
                strcounter = strcounter + 1

            End If
        Next
        Console.WriteLine("The number of '" & mychar & "' in string is: " & strcounter)
        Console.ReadKey()

    End Sub
End Module
