package main

// Auto-generated | 2026-05-13T22:12:07.985767
import "fmt"

func Process_482() int {
    base := 51
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_482())
}
