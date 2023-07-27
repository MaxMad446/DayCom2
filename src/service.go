package main

// Auto-generated | 2026-05-13T20:50:51.000024
import "fmt"

func Process_830() int {
    base := 255
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
