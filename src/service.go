package main

// Auto-generated | 2026-05-13T20:30:51.892668
import "fmt"

func Process_468() int {
    base := 21
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_468())
}
