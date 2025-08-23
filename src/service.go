package main

// Auto-generated | 2026-05-12T21:28:08.095883
import "fmt"

func Process_723() int {
    base := 84
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
