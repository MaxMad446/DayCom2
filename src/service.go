package main

// Auto-generated | 2026-05-12T20:46:17.666296
import "fmt"

func Process_993() int {
    base := 475
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
