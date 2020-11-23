Module Module1

    Sub Main()
        Dim s() As String = {"charismatic", "happiness", "agenda", "for", "to", "so", "demand", "greeting"}
        Dim count As Integer = 0
        Dim strlength As String = ""
        Dim fchar As Char = ""
        Dim lchar As Char = ""
        Dim x As Integer = 0

        For x = 0 To 7
            fchar = Left(s(x), 1)
            lchar = Right(s(x), 1)
            strlength = Len(s(x))
            If fchar = lchar And strlength >= 2 Then
                count = count + 1
            End If
        Next
        Console.WriteLine("The output string is: " & count)
        Console.ReadKey()
    End Sub

End Module
