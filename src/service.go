package main

// Auto-generated | 2026-05-14T18:17:03.691112
import "fmt"

func Process_648() int {
    base := 194
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_648())
}
