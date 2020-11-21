package main

// Auto-generated | 2026-05-14T18:06:51.463761
import "fmt"

func Process_208() int {
    base := 127
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_208())
}
