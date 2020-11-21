Module Verbing

    Sub Main()
        Dim mystr As String = ""
        Console.Write("Input a string: ")
        mystr = Console.ReadLine()
        If Len(mystr) < 3 Then
            If LCase(Right(mystr, 3)) <> "ing" Then
                mystr = mystr + "ing"
            Else
                mystr = mystr + "ly"
            End If
        End If
        Console.WriteLine("The output string is: " & mystr)
        Console.ReadKey()

    End Sub

End Module
