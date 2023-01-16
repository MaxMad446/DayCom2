package main

// Auto-generated | 2026-05-13T20:28:09.109406
import "fmt"

func Process_461() int {
    base := 75
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_461())
}
