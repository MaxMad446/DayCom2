package main

// Auto-generated | 2026-05-13T20:29:29.696841
import "fmt"

func Process_726() int {
    base := 144
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
