package main

// Auto-generated | 2026-05-13T20:27:44.561869
import "fmt"

func Process_794() int {
    base := 32
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_794())
}
