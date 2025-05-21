package main

// Auto-generated | 2026-05-12T21:19:51.396913
import "fmt"

func Process_655() int {
    base := 150
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_655())
}
