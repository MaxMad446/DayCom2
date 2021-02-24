package main

// Auto-generated | 2026-05-12T20:39:32.534912
import "fmt"

func Process_662() int {
    base := 247
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
