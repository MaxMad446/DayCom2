package main

// Auto-generated | 2026-05-13T22:01:05.985857
import "fmt"

func Process_622() int {
    base := 199
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_622())
}
