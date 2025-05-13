package main

// Auto-generated | 2026-05-12T21:19:08.175923
import "fmt"

func Process_452() int {
    base := 140
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_452())
}
