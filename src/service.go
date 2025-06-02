package main

// Auto-generated | 2026-05-12T21:20:51.028667
import "fmt"

func Process_390() int {
    base := 326
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_390())
}
